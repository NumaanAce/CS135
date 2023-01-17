// Name: Numaan Qureshi
// Course: CS135, Tong Yi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Board.hpp"

using namespace std;

struct Cell
{
    int row;
    int col;
};

// default constructor
Board::Board()
{
    max = 0;
    target = 32;
    // setting both rows and columns to 3
    numRows = 3;
    numCols = 3;

    // dynamically allocating the 2D array
    panel = new int *[numRows];
    for (int i = 0; i < numRows; i++)
        panel[i] = new int[numCols];
}

Board::Board(int m)
{
    max = 0;
    target = 32;
    // if m greater than 0 then assign it as rows and columns
    if (m > 0)
    {
        numRows = m;
        numCols = m;
    }
    // if not assign 3 to both
    else
    {
        numRows = 3;
        numCols = 3;
    }

    // dynamically allocating the 2D array
    panel = new int *[numRows];

    for (int i = 0; i < numRows; i++)
        panel[i] = new int[numCols];
}

Board::Board(int m, int n)
{
    max = 0;
    target = 32;

    // if both m and n are greater than 0 then assign them as rows and columns
    if (m > 0 && n > 0)
    {
        numRows = m;
        numCols = n;
    }
    // if not assign 3 to both
    else
    {
        numRows = 3;
        numCols = 3;
    }

    // dynamically allocating the 2D array
    panel = new int *[numRows];
    for (int i = 0; i < numRows; i++)
        panel[i] = new int[numCols];
}

Board::~Board()
{
    for (int i = 0; i < numRows; i++)
    {
        delete[] panel[i];
        panel[i] = nullptr;
    }

    delete[] panel;
    panel = nullptr;
}

bool Board::noAdjacentSameValue() const
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (panel[i][j] == 0)
                return false;

        }
    }
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols - 1; j++)
        {
            if (panel[i][j] == panel[i][j + 1])
                return false;
        }
    }
    for (int i = 0; i < numRows - 1; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (panel[i][j] == panel[i + 1][j])
                return false;
        }
    }
    return true;
}

void Board::selectRandomCell(int &row, int &col)
{
    int emptyCells = 0;
    vector<Cell> cellInfo;
    if (noAdjacentSameValue())
    {
        cout << "Game over. Try again." << endl;
        return;
    }

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (panel[i][j] == 0)
            {
                cellInfo.push_back(Cell());
                cellInfo[emptyCells].row = i;
                cellInfo[emptyCells].col = j;
                emptyCells++;
            }
        }
    }
    int value = rand() % cellInfo.size();
    panel[cellInfo[value].row][cellInfo[value].col] = 1;
    print();

    if (noAdjacentSameValue())
    {
        cout << "Game over. Try again." << endl;
        return;
    }
    return;
}

void Board::pressLeft()
{
    int *temp = new int[numCols];
    int toWrite;
    for (int j = 0; j < numRows; j++)
    {
        // initialize each element of temp to be 0
        for (int k = 0; k < numCols; k++)
            temp[k] = 0;

        // copy the non-zeros from the jth row of panel to temp
        toWrite = numCols - 1; // next position to write in temp
        for (int i = numCols - 1; i >= 0; i--)
            if (panel[j][i] > 0)
            {
                temp[toWrite] = panel[j][i];
                toWrite--;
            }

        for (int k = 0; k < numCols - 1; k++) //? k >= 0 is not correct, it would result in out of index exception in expression temp[k-1].
            if (temp[k] == temp[k + 1])
            {
                temp[k] *= 2;

                // MISS
                if (max < temp[k])
                    max = temp[k];

                temp[k + 1] = 0;
                k++;
            }
        int i = 0; // to write in jth column of panel, starting from the last row since we press down key, whose row index is numRows-1.
        int k = 0; // can use for loop for k
        while (k < numRows)
        {
            if (temp[k] > 0)
            {
                panel[j][i] = temp[k];
                i++;
            }
            k++;
        }
        // For the remaining elements in the jth column, pad with 0.
        while (i < numRows)
        {
            panel[j][i] = 0;
            i++;
        }
    }
    delete[] temp;
    temp = nullptr;

    // MISS
    int row = -1, col = -1;
    selectRandomCell(row, col);
}

void Board::pressRight()
{
    int *temp = new int[numCols];
    int toWrite;
    for (int j = 0; j < numRows; j++)
    {
        // initialize each element of temp to be 0
        for (int k = 0; k < numCols; k++)
            temp[k] = 0;
        // copy the non-zeros from the jth row of panel to temp
        toWrite = numCols - 1; // next position to write in temp
        for (int i = numCols - 1; i >= 0; i--)
        {
            if (panel[j][i] > 0)
            {
                temp[toWrite] = panel[j][i];
                toWrite--;
            }
        }
        for (int k = numCols - 1; k > 0; k--)
        { //? k >= 0 is not correct, it would result in out of index exception in expression temp[k-1].
            if (temp[k] == temp[k - 1])
            {
                temp[k] *= 2;
                // MISS
                if (max < temp[k])
                    max = temp[k];
                temp[k - 1] = 0;
                k--;
            }
        }
        int i = numCols - 1;
        int k = numCols - 1;
        while (k >= 0)
        {
            if (temp[k] > 0)
            {
                panel[j][i] = temp[k];
                i--;
            }
            k--;
        }
        // For the remaining elements in the jth column, pad with 0.
        while (i >= 0)
        {
            panel[j][i] = 0;
            i--;
        }
    }
    delete[] temp;
    temp = nullptr;

    // MISS
    int row = -1, col = -1;
    selectRandomCell(row, col);
}

void Board::pressUp()
{
    int *temp = new int[numRows];
    int toWrite;
    for (int j = 0; j < numCols; j++)
    {
        // initialize each element of temp to be 0
        for (int k = 0; k < numRows; k++)
            temp[k] = 0;

        // copy the non-zeros from the jth column
        // of panel to temp
        toWrite = numRows - 1; // next position to write in temp
        for (int i = numRows - 1; i >= 0; i--)
        {
            if (panel[i][j] > 0)
            {
                temp[toWrite] = panel[i][j];
                toWrite--;
            }
        }
        for (int k = 0; k < numRows - 1; k++) //? k >= 0 is not correct, it would result in out of index exception in expression temp[k-1].
        {
            if (temp[k] == temp[k + 1])
            {
                temp[k] *= 2;

                // MISS
                if (max < temp[k])
                    max = temp[k];

                temp[k + 1] = 0;
                k++;
            }
        }
        int i = 0; // to write in jth column of panel, starting from the last row since we press down key, whose row index is numRows-1.
        int k = 0; // can use for loop for k
        while (k < numRows)
        {
            if (temp[k] > 0)
            {
                panel[i][j] = temp[k];
                i++;
            }
            k++;
        }

        // For the remaining elements in the jth column, pad with 0.
        while (i < numRows)
        {
            panel[i][j] = 0;
            i++;
        }
    }

    delete[] temp;
    temp = nullptr;

    // MISS
    int row = -1, col = -1;
    selectRandomCell(row, col);
}

void Board::pressDown()
{
    int *temp = new int[numRows];
    int toWrite;
    for (int j = 0; j < numCols; j++)
    {
        // initialize each element of temp to be 0
        for (int k = 0; k < numRows; k++)
            temp[k] = 0;

        // copy the non-zeros from the jth column
        //  of panel to temp
        toWrite = numRows - 1; // next position to write in temp
        for (int i = numRows - 1; i >= 0; i--)
            if (panel[i][j] > 0)
            {
                temp[toWrite] = panel[i][j];
                toWrite--;
            }

        for (int k = numRows - 1; k > 0; k--)
        { //? k >= 0 is not correct, it would result in out of index exception in expression temp[k-1].
            if (temp[k] == temp[k - 1])
            {
                temp[k] *= 2;
                // MISS
                if (max < temp[k])
                    max = temp[k];
                temp[k - 1] = 0;
                k--;
            }
        }
        int i = numRows - 1; // to write in jth column of panel, starting from the last row since we press down key, whose row index is numRows-1.
        int k = numRows - 1; // can use for loop for k
        while (k >= 0)
        {
            if (temp[k] > 0)
            {
                panel[i][j] = temp[k];
                i--;
            }
            k--;
        }

        // For the remaining elements in the jth column, pad with 0.
        while (i >= 0)
        {
            panel[i][j] = 0;
            i--;
        }
    }

    delete[] temp;
    temp = nullptr;

    // MISS
    int row = -1, col = -1;
    selectRandomCell(row, col);
}

void printBorder(int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
            cout << "+";
        cout << "----+";
    }
}

void Board::print() const
{
    for (int i = 0; i < numRows; i++)
    {
        printBorder(numCols);
        cout << "\n|";

        for (int j = 0; j < numCols; j++)
        {
            string temp = "";
            for (int k = 0; k < 4 - to_string(panel[i][j]).length(); k++)
                temp += " ";

            if (panel[i][j] == 0)
                temp += " ";
            else
                temp += to_string(panel[i][j]);
            cout << temp << "|";
        }
        cout << "\n";
    }
    cout << "+";
    for (int k = 0; k < numCols; k++)
        cout << "----+";
    cout << endl;
}

void Board::start()
{
    int round = 1;

    // TODO: call selectRandomCell twice to generate two values
    int row = -1, col = -1;
    selectRandomCell(row, col);
    selectRandomCell(row, col);

    int ch;
    while (true)
    {
        if (max >= target) // in case goal is not a power of 2, we check for max > goal.
        {
            cout << "Congratulations!" << endl;
            break;
        }
        // https://stackoverflow.com/questions/10463201/getch-and-arrowcodes
        // cannot replace getchar by getch
        // When encountering letter S, even if the
        // project does not finish running yet,
        // can leave while (true) loop.
        // Add this line to stop time out exception.
        char ch = getchar();
        if (ch == 'S')
            break;
        if (ch == '\033')
        // if (ch == '\[')
        {              // if the first value is esc
            getchar(); // skip the [
            switch (getchar())
            { // the real value
            case 'A':
                // code for arrow up
                cout << "Round " << setw(4) << round << ": ";
                cout << "Pressed UP. "
                     << "Goal: " << target << endl;
                pressUp();
                round++;
                break;
            case 'B':
                // code for arrow down
                cout << "Round " << setw(4) << round << ": ";
                cout << "Pressed DOWN. "
                     << "Goal: " << target << endl;
                pressDown();
                round++;
                break;
            case 'C':
                // code for arrow right
                cout << "Round " << setw(4) << round << ": ";
                cout << "Pressed RIGHT. "
                     << "Goal: " << target << endl;
                pressRight();
                round++;
                break;
            case 'D':
                // code for arrow left
                cout << "Round " << setw(4) << round << ": ";
                cout << "Pressed LEFT. "
                     << "Goal: " << target << endl;
                pressLeft();
                round++;
                break;
            }
        }
    }
}