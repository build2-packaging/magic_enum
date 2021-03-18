#include <cassert>
#include <magic_enum.hpp>
#include <magic_enum/version.hpp>
#include <sstream>
#include <stdexcept>

enum class color {
   RED,
   GREEN,
   BLUE,
};

int main() {
   auto test = magic_enum::enum_name(color::RED);

   using namespace std;
}
