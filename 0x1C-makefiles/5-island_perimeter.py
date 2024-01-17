#!/usr/bin/python3

# define a variable and name it perimeter
# get the width of the grid by getting the length of the outer list, w
# get the length of the grid by getting the length of the inner list, l
# have an outer loop ranging from 1 to l - 2, limits included
# have an inner loop ranging from 1 to w - 2, limits included
# if the outer loop goes from 1 to l-2 without encountering a 0, then the perimeter will be 0
# if the perimeter > 0, but the current row is 0 only, end the outer loop
# In a cell, for any side with a 0, add 1 to the perimeter

"""
module name: 5-island_perimeter
utililties: island_perimeter function

* no module should be imported
"""

def island_perimeter(grid):
        """
        The purpose of this function is to calculate the perimeter
        of an island if it exists in the grid

        parameters:
        1. grid - is a list of list of integers:
            * 0 represents a water zone
            * 1 represents a land zone
            * One cell is a square with side length 1
            * Grid cells are connected horizontally/vertically (not diagonally)
            * Grid is rectangular, width and height don’t exceed 100

        Grid is completely surrounded by water, and there is one island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island)
        """
        perimeter = 0 
        w = len(grid)
        l = len(grid[0])
        for row in range(1, w-1):
                if (perimeter > 0 and not grid[row].__contains__(1)):
                        break
                if (perimeter == 0 and row == w-2 and not grid[row].__contains__(1)):
                        break
                for cell in range(1, l-1): 
                        if grid[row][cell]:
                                if grid[row][cell + 1] == 0:
                                        perimeter += 1
                                if grid[row][cell - 1] == 0:
                                        perimeter += 1
                                if grid[row+1][cell] == 0:
                                        perimeter += 1
                                if grid[row-1][cell] == 0:
                                        perimeter += 1
        return perimeter
