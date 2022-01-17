vector<int> rotateLeft(int d, vector<int> arr) {
vector<int> out(arr.size());
int shift_to_right = arr.size() - d;
if(shift_to_right  < 0) shift_to_right*=-1;
for(int i = 0 ; i < arr.size() ; i++)
{
    out[((i+shift_to_right)%arr.size())] = arr[i];
}
return out;
}
