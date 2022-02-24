
#include <string>

using namespace std;

// class from_string
// {
//     const string m_str;
// public:
//     from_string(const char *str) : m_str(str) {}
//     template <typename type>
//     operator type(){
//         if constexpr(is_same_v<type, float>)        return stof(m_str);
//         else if (is_same_v<type, int>)              return stoi(m_str);
//     }
// };

template <typename type>
auto from_string(string str) {
    if constexpr(is_same_v<type, float>)        return stof(str);
    else if (is_same_v<type, int>)              return stoi(str);

}

int main() {
    int n_int = from_string<int>("123");
    float n_float = from_string<float>("123.111");
}