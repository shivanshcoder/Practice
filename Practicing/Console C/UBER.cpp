#include<vector>
#include<iostream>
#include<algorithm>
#include<limits.h>	
using namespace std;


int minDistance(vector<int>dist, vector<bool>sptSet,int lightTimeOut)
{
	int min = INT_MAX, min_index;
	int distance;
	for (int v = 0; v < dist.size(); v++) {
		
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	}

	return min_index;
}


void printSolution(vector<int>dist)
{
	printf("Vertex Distance from Source\n");
	for (int i = 0; i < dist.size(); i++)
		printf("%d tt %d\n", i, dist[i]);
}

void dijkstra(vector< vector<pair<int,int> > > graph,int src,int lightTimeOut)
{
	vector<int>dist;
	dist.resize(graph.size());

	vector<bool>sptSet;
	sptSet.resize(graph.size());

	vector<int>timeStamp;
	timeStamp.resize(graph.size());

	for (int i = 0; i < graph.size(); i++)
		dist[i] = INT_MAX, sptSet[i] = false, timeStamp[i] = 0;

	dist[src] = 0;
	timeStamp[src] = 0;

	for (int count = 0; count < graph.size() - 1; count++)
	{
		int u = minDistance(dist, sptSet, lightTimeOut);
		sptSet[u] = true;
		
		for (int ithN = 0; ithN < graph[u].size(); ++ithN) {
			int Neighbour = graph[u][ithN].first;

			if (!sptSet[Neighbour] && dist[u] != INT_MAX) {

				int NewDist = dist[u] + graph[u][ithN].second;
				int NewTime = (timeStamp[u] + graph[u][ithN].second);

				int extraTime = NewTime / lightTimeOut;
				if (extraTime % 2 == 0)
					NewDist += lightTimeOut - (NewTime%lightTimeOut);


				NewTime = NewTime % lightTimeOut;

				if (NewDist < dist[Neighbour]) {
					timeStamp[Neighbour] = NewTime;
					dist[Neighbour] = NewDist;
				}

			}
		}

	}

	cout << dist.back();
}
void CreateEdge(vector< vector< pair<int, int> > >&Graph,int x, int y,int Val) {
	Graph[x - 1].push_back(make_pair(y - 1, Val));
	Graph[y - 1].push_back(make_pair(x - 1, Val));
}

// driver program to test above function 
int main()
{
	int numJunc;
	cin >> numJunc;


	vector< vector<pair<int,int> > > Graph;
	Graph.resize(numJunc);
	
	int lightTimeOut;
	cin >> lightTimeOut;

	int numEdges;
	cin >> numEdges;

	while (numEdges--) {
		int x, y, Val;
		cin >> x >> y >> Val;
		CreateEdge(Graph, x, y, Val);
	}

	dijkstra(Graph, 0,lightTimeOut);

	return 0;
}