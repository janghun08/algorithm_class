#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, cnt = 0;

    vector<int>num;
    vector<int>add;

    cin >> n;

    for(int i = 0; i < n; i++){
        int v, a = 0;
        cin >> v;
        num.push_back(v);
        if(i > 0){
            if(v > num[i-1]){
                while(v > num[i-1]){
                    num[i-1] *= 2;
                    a++;
                }
            }
            else{
                while(v < num[i-1]){
                    v *= 2;
                    a++;
                }
            }
            add.push_back(a);
        }
    }

    for(int i = 0; i < n-1; i++){
        cnt += add[i];
        if(i == n-2){
            continue;
        }
        add[i+1] += add[i];
    }
    cout << cnt;
}
