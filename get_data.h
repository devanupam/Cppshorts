
#include <array>

template <typename...Params>
auto get_data(const Params&...params) {
    return std::array {params...};
}
