# Battleship-Calculation

## How to use
You will write your input in format then the program will execute the output, which is the chances of having a ship in every spot

### Input file
First line contains H, W, K, which are the height, width of the board, and number of ships in the board. All the values are seperated by spaces.

Second line contains K width of each ships. All values are separated by spaces

Next H lines contains the information about H row:
- Each row has W characters, which consists information on each cell. All characters are seperated by spaces. Characters are defined in the following:
  + 'x' marks the unrevealed cell
  + '#' marks the empty cell
  + Number from 1 to K indicates the cell contains the i_th ship in the second line of the input file

### Output file
Output the HxW board consist chances having ship on each cell
- '.' marks revealed cell
- Number marks how many ships can have on the cell. If the number is -1 then the cell definitely has a ship

### Example
**input.INP**
```
3 3 2
2 3
x # 2
# x 2
x x 2
```
**output.OUT**
```
0 . .
. 1 .
1 1 .
```
