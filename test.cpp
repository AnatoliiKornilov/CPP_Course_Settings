#include <cmath>
#include <print>

int main() {
  for (int hundred = 1; hundred <= 9; hundred++) {
    for (int ten = 0; ten <= 9; ten++) {
      for (int one = 0; one <= 9; one++) {
        int number = hundred * 100 + ten * 10 + one;
        int cube_sum =
            hundred * hundred * hundred + ten * ten * ten + one * one * one;

        if (number == cube_sum) {
          std::println("{}", number);
        }
      }
    }
  }

  return 0;
}
