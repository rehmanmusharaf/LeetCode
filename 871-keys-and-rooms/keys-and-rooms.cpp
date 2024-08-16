#include<queue>
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
    if(size(rooms)==0)
    {
        return true;
    }
    queue<int> q;
    vector<bool> visited(size(rooms),false);
    visited[0]=true;
    for(int i=0;i<size(rooms[0]);i++)
    {
    int ind=rooms[0][i];
    visited[ind]=true;
    q.push(rooms[0][i]);
    }
    while(!q.empty())
    {
    int index=q.front();
    q.pop();
    for(int i=0;i<size(rooms[index]);i++)
    {
    int ind=rooms[index][i];
    if(visited[ind]==false)
    {
        visited[ind]=true;
        q.push(ind);
    }
    }
    }
    for(int i=0;i<size(rooms);i++)
    {
        if(visited[i]==false)
        return false;
    }
    return true;
    }
};