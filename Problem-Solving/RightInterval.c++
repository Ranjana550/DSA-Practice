/**
You are given an array of intervals, where intervals[i] = [starti, endi] and each starti is unique.

The right interval for an interval i is an interval j such that startj >= endi and startj is minimized. Note that i may equal j.

Return an array of right interval indices for each interval i. If no right interval exists for interval i, then put -1 at index i.

 

Example 1:

Input: intervals = [[1,2]]
Output: [-1]
Explanation: There is only one interval in the collection, so it outputs -1.
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find(vector<pair<int,int>>& v,int el)
    {
        int s=0,e=v.size(),ans=INT_MAX;
        while(s<e)
        {
            int mid=(s+e)/2;
            if(v[mid].first>=el)
            {
                ans=min(ans,v[mid].second);
                e=mid;
            }
            else
            {
                s=mid+1;
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>> v;
        vector<int> ans;
        int j=0;
        for(int i=0;i<intervals.size();++i)
        {
            v.push_back({intervals[i][0],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<intervals.size();++i)
        {
            int e=intervals[i][1];
            int f=find(v,e);
            ans.push_back(f);
        }
        return ans;
        
    }
int main(){
vector<vector<int>> intervals = {{1,2}};
cout<<findRightInterval;
}