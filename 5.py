# Python3 implementation of above approach
 
# Function to return required 
# array of distances
def shortestDistance(S, X):
 
    # Find distance from occurrences of X
    # appearing before current character.
    inf = float('inf')
    prev = inf
    ans = []
    for i,j in enumerate(S):
        if S[i] == X:
            prev = i
        if (prev == inf) : 
            ans.append(inf)
        else :     
            ans.append(i - prev)
 
 
    # Find distance from occurrences of X
    # appearing after current character and
    # compare this distance with earlier.
    prev = inf
    for i in range(len(S) - 1, -1, -1):
        if S[i] == X:
            prev = i
        if (X != inf):    
            ans[i] = min(ans[i], prev - i)
 
    # return array of distance
    return ans
 
 
# Driver code
S =  input()
X = input()
 
# Function call to print answer
print(shortestDistance(S, X))