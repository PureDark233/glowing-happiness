class Solution:
    def __init__(self,grid):
        print(self.minPathSum(grid))
    def getminRoad(self,x,y,road,grid):
        if road[x][y]!=-1:
            return road[x][y]
        if x==0 and y==0:
            road[x][y]=grid[0][0]
        elif x==0:
            road[x][y]=self.getminRoad(x,y-1,road,grid)+grid[x][y]
        elif y==0:
            road[x][y]=self.getminRoad(x-1,y,road,grid)+grid[x][y]
        else:
            road[x][y]=min(self.getminRoad(x-1,y,road,grid)+grid[x][y],self.getminRoad(x,y-1,road,grid)+grid[x][y])
        return road[x][y]
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        m=len(grid)
        n=len(grid[0])
        #road=np.ones((m,n),np.int32)*-1
        road=[[-1 for col in range(n)]for row in range(m)]
        return self.getminRoad(m-1,n-1,road,grid)
grid=[[1,3,1],[1,5,1],[4,2,1]]
sad=Solution(grid)

