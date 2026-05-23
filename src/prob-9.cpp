#include <cstddef>
#include <print>

/**
 * Project Euler: Special Pythagorean Triplet
 * <p>A Pythagorean triplet is a set of three natural numbers, $a \lt b \lt c$,
for which,
$$a^2 + b^2 = c^2.$$</p>
<p>For example, $3^2 + 4^2 = 9 + 16 = 25 = 5^2$.</p>
<p>There exists exactly one Pythagorean triplet for which $a + b + c =
1000$.<br>Find the product $abc$.</p>

 */

size_t naive_special_triplet(size_t N) {
  for (size_t c = 1; c < N; c++) {
    for (size_t a = 1; a < c; a++) {
      for (size_t b = 1; b < a; b++) {
        if (a * a + b * b == c * c && a + b + c == N)
          return a * b * c;
      }
    }
  }

  return 0;
}

size_t special_triplet(size_t N) {
  size_t c;

  for (size_t a = 1; a < N / 2; a++) {
    for (size_t b = 1; b < N / 2; b++) {
      c = N - (a + b);
      if (a * a + b * b == c * c) {
        return a * b * c;
      }
    }
  }

  return 0;
}

int main() {
  std::println("Hello World");

  size_t N = 1000;
  std::println("naive_special_triplet({}) = {}", N, naive_special_triplet(N));

  std::println("special_triplet({}) = {}", N, special_triplet(N));

  return 0;
}
