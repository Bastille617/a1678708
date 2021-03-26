//
//  test.cpp
//  
//
//  Created by Chen Chen on 26/3/21.
//

#include "test.hpp"
#include <vector>
#include <stddef.h>

using namespace std;

class Transpot{
private:

public:
    int get_dist_travelled(int w)
   {
        w = kilometers;
    }
protected:
    int kilometers;
}

class Horse: public Transpot{
private:

public:
    void go(){
        return (kilometers);
    }
}

int main(void){
    Transpot travel;
    travel.get_dist_travelled(100);
    cout<<"horse travel 100 km"<<travel.go();

    return 0;
}
