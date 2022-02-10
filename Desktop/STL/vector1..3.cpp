#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void print_vector(std::vector<T>& vec) {
    //전체 백터를 출력하기
    for(typename vector<T>::iterator itr = vec.begin(); itr!=vec.end();
         ++itr){
             //템플릿을 사용할 경우 typename를 추가해줘야 한다.
        cout << *itr <<endl;
    }
}

int main(){
    vector<int> vec;
    vec.push_back(10); 
    vec.push_back(20); 
    vec.push_back(30); 
    vec.push_back(40); 

    cout << "처음 벡터 상태" <<endl;
    print_vector(vec);
    cout << "---------------------"<<endl;

    //vec[2] 앞에 15 추가
    vec.insert(vec.begin()+2,15);
    print_vector(vec);

    cout<< "---------------------" << endl;
    //vec[3] 제거
    vec.erase(vec.begin()+3);
    print_vector(vec);

    //erase 와 insert는 모두 처리 속도가 느린 편이다
    //고료 사용할 때 주의해야 한다.
}


/*
처음 벡터 상태
10
20
30
40
---------------------
10
20
15
30
40
---------------------
10
20
15
40
*/