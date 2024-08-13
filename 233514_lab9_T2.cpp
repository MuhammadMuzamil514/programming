 #include <iostream>   //M.Muzamil   233514  Bs cs(B)
using namespace std;
int main() {
	int count;
    for(int i=32; i <=127; ++i) {
    cout<<static_cast<char>(i)<<" ";
  count++;
	if(count==16){
	cout<<endl;
	count=0;
 
    }
}
}
