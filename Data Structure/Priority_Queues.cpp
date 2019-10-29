#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void solve(priority_queue <int, vector<int>, greater<int>> gq) 
{ 
    priority_queue <int, vector<int>, greater<int>> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    priority_queue <int, vector<int>, greater<int>> pq; 
    pq.push(1); 
    pq.push(2); 
    pq.push(5); 
    pq.push(23); 
    pq.push(333); 
  
    cout << "The priority queue pq is : "; 
    solve(pq); 
  
    cout << "\npq.size() : " << pq.size(); 
    cout << "\npq.top() : " << pq.top(); 
  
  
    cout << "\npq.pop() : "; 
    pq.pop(); 
    solve(pq); 
  
    return 0; 
}
