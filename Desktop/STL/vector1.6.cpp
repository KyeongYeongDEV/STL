#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    //끝에서부터 출력하기
    for(vector<int>::size_type i = vec.size()-1; i >=0; i--){
        cout << vec[i] <<endl;
    }

    return 0;

    //컴파일 시 오류가 발생한다.
    //vector의 index를 담당하는 타입이 
    //부호 없는 정수이기 떄문이다.
    //따라서 i가 0일 때 i--를 하게 된다면 
    //-1이 되는 것이 아니라
    //해당 타입에서 가장 큰 정수가 돼버린다.
    //해결법
    //역반복자를 사용

}