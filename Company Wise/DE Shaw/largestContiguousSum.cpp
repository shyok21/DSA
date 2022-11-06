#include<bits/stdc++.h>

int largestContiguousSum(vector <int> &arr){
    int maxSoFar = -100000;
	int maxEndingHere = 0;
	for(int i=0;i<arr.size();i++) {
		maxEndingHere += arr[i];
		if(maxSoFar < maxEndingHere)
			maxSoFar = maxEndingHere;
		if(maxEndingHere < 0)
			maxEndingHere = 0;
	}
	return maxSoFar;
}

int main() {
    vector<int>A;
    A.push_back(-4);
    A.push_back(1);
    A.push_back(5);
    A.push_back(-3);
    A.push_back(6);
    cout<<largestContiguousSum(A)<<endl;
    return 0;
}