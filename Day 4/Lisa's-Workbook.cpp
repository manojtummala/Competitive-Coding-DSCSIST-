#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, nproblems;
    cin >> n >> k;
    
    int page_num = 0, special_problem = 0, problem;
    for(int i=0;i<n;i++) {
        cin >> nproblems;
        problem = 1; // problems start from 1 for every new chapter
        page_num++;
        while(nproblems >= 1) {
            nproblems--;
            if(problem == page_num) {
                special_problem++;
            }
            // problem mod k = 0, when a page is full of k problems
            // number_of_problems != 0, because for the last problem in that chapter we dont have to increase the page count
            if(problem % k == 0 && nproblems != 0) {
                page_num++;
            }
            // tracks count of problems for each chapter
            problem++;
        }
    }
    cout << special_problem;
}