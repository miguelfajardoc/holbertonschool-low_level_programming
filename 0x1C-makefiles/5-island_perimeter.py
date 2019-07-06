#!/usr/bin/python3

def island_perimeter(grid):
    perimeter = 0
    island = []

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                island.append([i, j])
    count = checkisland(island)
    perimeter = perimeter - (count * 2)
    return(perimeter)


def checkisland(island):
    contiguous = 0
    aux = []
    if len(island) < 2:
        return(0)
    else:
        for element in island:
            aux = element.copy()
            aux[0] += 1
            if aux in island:
                contiguous += 1
            aux = element.copy()
            aux[1] += 1
            if aux in island:
                contiguous += 1
        return(contiguous)
