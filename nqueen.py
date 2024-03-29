
global N
N = 8
 
def printSolution(board):
    for i in range(N):
        for j in range(N):
            print (board[i][j], end = " ")
        print()

def isSafe(board, row, col):
     
    for i in range(col):
        if board[row][i] == 1:
            return False

    for i, j in zip(range(row, -1, -1),
                    range(col, -1, -1)):
        if board[i][j] == 1:
            return False
 
    for i, j in zip(range(row, N, 1),  
                    range(col, -1, -1)):
        if board[i][j] == 1:
            return False
 
    return True


def solve(board, col):
   
    if col >= N:
        return True
 
   
    for i in range(N):
 
        if isSafe(board, i, col):
             
           
            board[i][col] = 1
 
           
            if solve(board, col + 1) == True:
                return True
 
           
            board[i][col] = 0
 
   
    return False
 
grid=[[0 for x in range(8)]for y in range(8)]

print("\n\n")
if solve(grid, 0) == False:
    print ("Solution does not exist")

else:
    printSolution(grid)
    
 
