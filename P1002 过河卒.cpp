#include <iostream>
using namespace std;
long long ch[25][25];
bool ju[25][25];
int x[8]={-2,-2,-1,-1,1,1,2,2};
int y[8]={1,-1,2,-2,2,-2,1,-1};
bool check(int x,int y){
	if(x<0||y<0) return false;
	return true;
}
int main(){
	int ax,ay,bx,by;
	cin>>ax>>ay>>bx>>by;
	ch[0][0]=1;
	ju[bx][by]=1;
	for(int i=0;i<8;i++){
		int new_x=bx+x[i];
		int new_y=by+y[i];
		if(check(new_x,new_y)){
			ju[new_x][new_y]=1;
		}
	}
	for(int i=0;i<=ax;i++){
		for(int j=0;j<=ay;j++){
			if(ju[i][j]) continue;
			if(i==0&&j==0) continue;
			ch[i][j]=ch[i-1][j]+ch[i][j-1];
			//cout<<ch[i][j]<<" ";
		}
		//cout<<endl;
	}
	cout<<ch[ax][ay];
	return 0;
	
} 
