# define a variable and name it perimeter
# get the width of the grid by getting the length of the outer list, w
# get the length of the grid by getting the length of the inner list, l
# have an outer loop ranging from 1 to l - 2, limits included
# have an inner loop ranging from 1 to w - 2, limits included
# if the outer loop goes from 1 to l-2 without encountering a 0, then the perimeter will be 0
# if the perimeter > 0, but the current row is 0 only, end the outer loop
# In a cell, for any side with a 0, add 1 to the perimeter

def island_perimeter(grid):
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
