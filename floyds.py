def flyods(arr,n):
    for k in range(0,n+1):
        for i in range(0,n+1):
            for j in range(0,n+1):
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j])

    for i in range(0,n+1):
        for j in range(0,n+1):
            
            print(' ',arr[i][j],end="")
        print()
X=9999
arr=[[0   ,2   ,X,1   ,8   ],
     [6   ,0   ,3   ,2   ,X],
     [X,X,0   ,4   ,X],
     [X,X,2   ,0   ,3   ],
     [3   ,X,X,X,0   ],
    ]
flyods(arr,4)

def min(a,b):
    if a<b:
        return a
    else:
        return b
