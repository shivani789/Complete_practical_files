import numpy as np

def NNI(gray, zooming_factor):
    gray_nni = [[0 for i in range(gray.shape[1]*zooming_factor)] for j in range(gray.shape[0]*zooming_factor)] 
    for i in range(0,gray.shape[0]):
        for j in range(0,gray.shape[1]):
            i_ini = i*zooming_factor
            j_ini = j*zooming_factor
            for x in range(i_ini, i_ini+zooming_factor):
                for y in range(j_ini, j_ini+zooming_factor):
                    gray_nni[x][y] = gray[i][j]
    return np.array(gray_nni)

def column_expansion(arr, k):
    row = arr.shape[0]
    col = arr.shape[1]
    new_col = col*(k+1) - k
    new_arr = [[0 for i in range(new_col)] for j in range(row)]
    for i in range(row):
        x = 0
        for j in range(0,new_col,k+1):
            new_arr[i][j] = arr[i][x]
            x += 1
    for i in range(row):
        for j in range(0,new_col-k-1,k+1):
            d = (new_arr[i][j+k+1]-new_arr[i][j])//(k+1)
            for x in range(j+1,j+k+1):
                new_arr[i][x] = new_arr[i][j] + (x-j)*d
    return np.array(new_arr)
def row_expansion(arr, k):
    row = arr.shape[0]
    col = arr.shape[1]
    new_row = row*(k+1) - k
    new_arr = [[0 for i in range(col)] for j in range(new_row)]
    for i in range(col):
        x = 0
        for j in range(0,new_row,k+1):
            new_arr[j][i] = arr[x][i]
            x += 1
    for i in range(col):
        for j in range(0,new_row-k-1,k+1):
            d = (new_arr[j+k+1][i]-new_arr[j][i])//(k+1)
            for x in range(j+1,j+k+1):
                new_arr[x][i] = new_arr[j][i] + (x-j)*d
    return np.array(new_arr)

def ZOH(gray):
    return(row_expansion(column_expansion(gray,1),1))

def KTZ(gray, k):
    return(row_expansion(column_expansion(gray,k-1),k-1))

random_arr = [[28,32,26,16,36],[40,22,59,54,32],[18,22,45,23,62]]
random_arr = np.array(random_arr)

print("Nearest Neighbour with zooming factor as 2:- ")
print(NNI(random_arr,2))

print("Bilinear Interpolation:- ")
print(ZOH(random_arr))

print("K-Times Zooming for k=3:- ")
print(KTZ(random_arr,3))