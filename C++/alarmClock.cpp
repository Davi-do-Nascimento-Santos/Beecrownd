#include <iostream>
using namespace std;
int main(){
    while(true){
        int h1, m1, h2, m2, minutes, hour, all;
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 &&  h2 == 0 && m1 == 0 && m2 == 0){
            break;
        }
        if (h1 == h2){
            if (m1 < m2){
                minutes = m2 -m1;
                all = minutes;
            }else if (m1 == m2){
                all = 24 * 60;
            }else {
                hour = 23 * 60;
                minutes = (60 - m1) + m2;
                all = hour + minutes; 
            }
        }else if (h1 < h2){
            if (m1 == m2){
                all = (h2 - h1) * 60;
            }else if(m1 < m2){
                hour = (h2 - h1) * 60;
                minutes = m2 -m1;
                all = hour + minutes;
            }else if(m1 > m2){
                if (h2 - h1 == 1){
                    minutes = (60 - m1) + m2;
                    all = minutes;
                }else{
                    hour = h2 - h1-1;
                    minutes = (60 -m1) + m2;
                    all = (hour*60) + minutes;
                }
            }
        } else if(h1 > h2){
            if (m1 == m2){
                hour = (24 - h1) + h2;
                all = hour*60;
            }else if (m1  < m2){
                hour = ((24 - h1) + h2) * 60;
                minutes = m2 - m1;
                all = hour + minutes;
            }else if (m1 > m2){
                if (((24 - h1) + h2) == 1){
                    minutes = (60 - m1) +  m2;
                    all = minutes;
                }else{
                    hour = ((24 - h1) + h2-1) * 60;
                    minutes = (60 - m1) + m2;
                    all = hour + minutes;
                }
            }
        }
        cout << all << endl;
    }
    return 0;
}
