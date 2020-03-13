#include <bits/stdc++.h>

#define f first
#define s second

using namespace std;

//https://practice.geeksforgeeks.org/problems/job-sequencing-problem/0

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 

int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    
	   int n,job_sum  = 0,job_size = 0;
	   scanf("%d",&n);
	   
	   vector< pair<int,int> > job(n);
	   vector<int> id(n);
	    
	   bool slot[n];
	   int result[n] = {0};
	   
	   for(int i = 0; i < n; i++){
	       scanf("%d%d%d",&id[i],&job[i].f,&job[i].s);
	       slot[i] = false;
	   }
	   sort(job.begin(), job.end(), sortbysec);
	   
	   for(int i=0; i<n; i++){ 
           for(int j=min(n, job[i].f)-1; j>=0; j--){ 
              if(slot[j]==false){ 
                result[j] = job[i].s;   
                slot[j] = true;  
                break; 
               } 
            } 
        }
        for(int i = 0; i < n; i++){
            if(slot[i]){
                job_size++;
                job_sum += result[i];
            }
        }
        printf("%d %d\n",job_size,job_sum);
	}
	return 0;
}
