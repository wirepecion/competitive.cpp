#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> st;
    int data;
    char input;
    int t, w; cin >> t;
    while (t--) {
        cin >> w;
        while (w--) {
            cin >> input;
            if (input == 'a') {
                cin >> data;
                st.push_back(data);
            }
            else if (input == 'b')
            {
                if (st.empty() != true)
                {
                    cout << st.front() << " ";
                    st.erase(st.begin());
                }
                else
                {
                    cout << "-1" << " ";
                }
            }
            else if (input == 'c')
            {
                cout << st.size() << " ";
            }
            else if (input == 'd')
            {
                if (st.empty() != true)
                {
                    cout << st.front() << " ";
                }
                else
                {
                    cout << "-1" << " ";
                }
            }
            else if (input == 'e')
            {
                if (st.empty() != true)
                {
                    cout << st.back() << " ";
                }
                else
                {
                    cout << "-1" << " ";
                }
            }
        }
        st.clear();
    }
}