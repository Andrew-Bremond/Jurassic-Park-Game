#include <gtest/gtest.h>
#include "../header/MiniGame.h"
using namespace std;

TEST(DinoGeneratorTest, DinoGenerator1){
    MiniGame *game = new MiniGame();
    EXPECT_EQ(game -> DinoGenerator(1), "What is the most popular dino to the general public: ");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}