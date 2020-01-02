#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> a = {1, 4, 3, 2, 6, 5, 7, 9, 8, 13, 12, 11, 12, 10, 1, 4, 3, 2, 6, 5, 7, 9, 8, 13, 12};
//{5,2,7};
//{5, 8, 4, 3, 9, 11, 15, 14, 1 ,2 ,6};
unordered_map<int, int> hashMap;
int number_of_elements = a.size();
hashMap[0] = -1;
int xor_sum = 0;
for(int i = 0; i < number_of_elements; i++) {
    xor_sum ^= a[i];
    if(hashMap.find(xor_sum) != hashMap.end()) {
        cout << hashMap[xor_sum] + 1 << " " << i << endl;
        break;
    }
    hashMap[xor_sum] = i;
}
return 0;
}