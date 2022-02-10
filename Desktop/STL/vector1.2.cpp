#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10); //맨 뒤에 10 추가
    vec.push_back(20); //맨 뒤에 20 추가
    vec.push_back(30); //맨 뒤에 30 추가
    vec.push_back(40); //맨 뒤에 40 추가


    //전제 백터를 출력하기
    for(vector<int>::iterator itr = vec.begin(); itr != vec.end();++itr){
        cout << *itr<<endl;
        //vector<int>::iterator 벡터의 반복자 타입

        //vec.begin()  벡터의 시작
        //vec.end()    벡터의 끝
        //itr != vec.end() 벡터의 전부를 보고 싶을 때 
    }

    //int arr[4] = {10, 20,30,40};
    //*(arr+2) == arr[2] ==30;
    //*(itr+2) == vec[2] == 30;

    vector<int>::iterator itr = vec.begin() +2;
    cout<< "3번째 원소 :: " << *itr <<endl;
}