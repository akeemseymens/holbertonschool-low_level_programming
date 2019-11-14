#!/usr/bin/python3

def island_perimeter(grid):
    """
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water,
    and there is one island (or nothing).
    The island doesn’t have “lakes” 
    (water inside that isn’t connected to the water around the island).
    """
    land = 1
    water = 0
    perimeter = 0

    for i, row  in enumerate(grid):
        for j, idx  in enumerate(row):
            if idx == land:
                    if j == 0 or grid[i][j - 1] == water:
                        perimeter += 1
                    if (j + 1) == len(row) or grid[i][j + 1] == water:
                        perimeter += 1
                    if i == 0 or grid[i - 1][j] == water:
                        perimeter += 1
                    if (i + 1) == len(grid) or grid[i + 1][j] == water:
                        perimeter += 1

    return perimeter
