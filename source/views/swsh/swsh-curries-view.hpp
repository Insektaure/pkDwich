#pragma once

#include "../../components/button.hpp"
#include "../../models/swsh-curries.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class SWSHCurriesView : public tsl::Gui {
 public:
  SWSHCurriesView() { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Sword / Shield", "Curry Dex Recipes");
    auto list = new tsl::elm::List();

    // Base Curries
    list->addItem(new tsl::elm::CategoryHeader("Base Curries"));
    list->addItem(new RecipeViewButton("1. Curry", "Curry", BaseCurry));
    list->addItem(new RecipeViewButton("2. Spicy Curry", "Spicy Curry", SpicyCurry));
    list->addItem(new RecipeViewButton("3. Dry Curry", "Dry Curry", DryCurry));
    list->addItem(new RecipeViewButton("4. Sweet Curry", "Sweet Curry", SweetCurry));
    list->addItem(new RecipeViewButton("5. Bitter Curry", "Bitter Curry", BitterCurry));
    list->addItem(new RecipeViewButton("6. Sour Curry", "Sour Curry", SourCurry));

    // Sausage Curries
    list->addItem(new tsl::elm::CategoryHeader("Sausage Curries"));
    list->addItem(new RecipeViewButton("7. Sausage Curry", "Sausage Curry", SausageCurry));
    list->addItem(new RecipeViewButton("8. Spicy Sausage Curry", "Spicy Sausage Curry", SpicySausageCurry));
    list->addItem(new RecipeViewButton("9. Dry Sausage Curry", "Dry Sausage Curry", DrySausageCurry));
    list->addItem(new RecipeViewButton("10. Sweet Sausage Curry", "Sweet Sausage Curry", SweetSausageCurry));
    list->addItem(new RecipeViewButton("11. Bitter Sausage Curry", "Bitter Sausage Curry", BitterSausageCurry));
    list->addItem(new RecipeViewButton("12. Sour Sausage Curry", "Sour Sausage Curry", SourSausageCurry));

    // Juicy Curries
    list->addItem(new tsl::elm::CategoryHeader("Juicy Curries"));
    list->addItem(new RecipeViewButton("13. Juicy Curry", "Juicy Curry", JuicyCurry));
    list->addItem(new RecipeViewButton("14. Spicy Juicy Curry", "Spicy Juicy Curry", SpicyJuicyCurry));
    list->addItem(new RecipeViewButton("15. Dry Juicy Curry", "Dry Juicy Curry", DryJuicyCurry));
    list->addItem(new RecipeViewButton("16. Sweet Juicy Curry", "Sweet Juicy Curry", SweetJuicyCurry));
    list->addItem(new RecipeViewButton("17. Bitter Juicy Curry", "Bitter Juicy Curry", BitterJuicyCurry));
    list->addItem(new RecipeViewButton("18. Sour Juicy Curry", "Sour Juicy Curry", SourJuicyCurry));

    // Rich Curries
    list->addItem(new tsl::elm::CategoryHeader("Rich Curries"));
    list->addItem(new RecipeViewButton("19. Rich Curry", "Rich Curry", RichCurry));
    list->addItem(new RecipeViewButton("20. Spicy Rich Curry", "Spicy Rich Curry", SpicyRichCurry));
    list->addItem(new RecipeViewButton("21. Dry Rich Curry", "Dry Rich Curry", DryRichCurry));
    list->addItem(new RecipeViewButton("22. Sweet Rich Curry", "Sweet Rich Curry", SweetRichCurry));
    list->addItem(new RecipeViewButton("23. Bitter Rich Curry", "Bitter Rich Curry", BitterRichCurry));
    list->addItem(new RecipeViewButton("24. Sour Rich Curry", "Sour Rich Curry", SourRichCurry));

    // Bean Medley Curries
    list->addItem(new tsl::elm::CategoryHeader("Bean Medley Curries"));
    list->addItem(new RecipeViewButton("25. Bean Medley Curry", "Bean Medley Curry", BeanMedleyCurry));
    list->addItem(new RecipeViewButton("26. Spicy Bean Medley Curry", "Spicy Bean Medley Curry", SpicyBeanMedleyCurry));
    list->addItem(new RecipeViewButton("27. Dry Bean Medley Curry", "Dry Bean Medley Curry", DryBeanMedleyCurry));
    list->addItem(new RecipeViewButton("28. Sweet Bean Medley Curry", "Sweet Bean Medley Curry", SweetBeanMedleyCurry));
    list->addItem(new RecipeViewButton("29. Bitter Bean Medley Curry", "Bitter Bean Medley Curry", BitterBeanMedleyCurry));
    list->addItem(new RecipeViewButton("30. Sour Bean Medley Curry", "Sour Bean Medley Curry", SourBeanMedleyCurry));

    // Toast Curries
    list->addItem(new tsl::elm::CategoryHeader("Toast Curries"));
    list->addItem(new RecipeViewButton("31. Toast Curry", "Toast Curry", ToastCurry));
    list->addItem(new RecipeViewButton("32. Spicy Toast Curry", "Spicy Toast Curry", SpicyToastCurry));
    list->addItem(new RecipeViewButton("33. Dry Toast Curry", "Dry Toast Curry", DryToastCurry));
    list->addItem(new RecipeViewButton("34. Sweet Toast Curry", "Sweet Toast Curry", SweetToastCurry));
    list->addItem(new RecipeViewButton("35. Bitter Toast Curry", "Bitter Toast Curry", BitterToastCurry));
    list->addItem(new RecipeViewButton("36. Sour Toast Curry", "Sour Toast Curry", SourToastCurry));

    // Pasta Curries
    list->addItem(new tsl::elm::CategoryHeader("Pasta Curries"));
    list->addItem(new RecipeViewButton("37. Pasta Curry", "Pasta Curry", PastaCurry));
    list->addItem(new RecipeViewButton("38. Spicy Pasta Curry", "Spicy Pasta Curry", SpicyPastaCurry));
    list->addItem(new RecipeViewButton("39. Dry Pasta Curry", "Dry Pasta Curry", DryPastaCurry));
    list->addItem(new RecipeViewButton("40. Sweet Pasta Curry", "Sweet Pasta Curry", SweetPastaCurry));
    list->addItem(new RecipeViewButton("41. Bitter Pasta Curry", "Bitter Pasta Curry", BitterPastaCurry));
    list->addItem(new RecipeViewButton("42. Sour Pasta Curry", "Sour Pasta Curry", SourPastaCurry));

    // Mushroom Medley Curries
    list->addItem(new tsl::elm::CategoryHeader("Mushroom Medley Curries"));
    list->addItem(new RecipeViewButton("43. Mushroom Medley Curry", "Mushroom Medley Curry", MushroomMedleyCurry));
    list->addItem(new RecipeViewButton("44. Spicy Mushroom Medley Curry", "Spicy Mushroom Medley Curry", SpicyMushroomMedleyCurry));
    list->addItem(new RecipeViewButton("45. Dry Mushroom Medley Curry", "Dry Mushroom Medley Curry", DryMushroomMedleyCurry));
    list->addItem(new RecipeViewButton("46. Sweet Mushroom Medley Curry", "Sweet Mushroom Medley Curry", SweetMushroomMedleyCurry));
    list->addItem(new RecipeViewButton("47. Bitter Mushroom Medley Curry", "Bitter Mushroom Medley Curry", BitterMushroomMedleyCurry));
    list->addItem(new RecipeViewButton("48. Sour Mushroom Medley Curry", "Sour Mushroom Medley Curry", SourMushroomMedleyCurry));

    // Smoked-Tail Curries
    list->addItem(new tsl::elm::CategoryHeader("Smoked-Tail Curries"));
    list->addItem(new RecipeViewButton("49. Smoked-Tail Curry", "Smoked-Tail Curry", SmokedTailCurry));
    list->addItem(new RecipeViewButton("50. Spicy Smoked-Tail Curry", "Spicy Smoked-Tail Curry", SpicySmokedTailCurry));
    list->addItem(new RecipeViewButton("51. Dry Smoked-Tail Curry", "Dry Smoked-Tail Curry", DrySmokedTailCurry));
    list->addItem(new RecipeViewButton("52. Sweet Smoked-Tail Curry", "Sweet Smoked-Tail Curry", SweetSmokedTailCurry));
    list->addItem(new RecipeViewButton("53. Bitter Smoked-Tail Curry", "Bitter Smoked-Tail Curry", BitterSmokedTailCurry));
    list->addItem(new RecipeViewButton("54. Sour Smoked-Tail Curry", "Sour Smoked-Tail Curry", SourSmokedTailCurry));

    // Leek Curries
    list->addItem(new tsl::elm::CategoryHeader("Leek Curries"));
    list->addItem(new RecipeViewButton("55. Leek Curry", "Leek Curry", LeekCurry));
    list->addItem(new RecipeViewButton("56. Spicy Leek Curry", "Spicy Leek Curry", SpicyLeekCurry));
    list->addItem(new RecipeViewButton("57. Dry Leek Curry", "Dry Leek Curry", DryLeekCurry));
    list->addItem(new RecipeViewButton("58. Sweet Leek Curry", "Sweet Leek Curry", SweetLeekCurry));
    list->addItem(new RecipeViewButton("59. Bitter Leek Curry", "Bitter Leek Curry", BitterLeekCurry));
    list->addItem(new RecipeViewButton("60. Sour Leek Curry", "Sour Leek Curry", SourLeekCurry));

    // Apple Curries
    list->addItem(new tsl::elm::CategoryHeader("Apple Curries"));
    list->addItem(new RecipeViewButton("61. Apple Curry", "Apple Curry", AppleCurry));
    list->addItem(new RecipeViewButton("62. Spicy Apple Curry", "Spicy Apple Curry", SpicyAppleCurry));
    list->addItem(new RecipeViewButton("63. Dry Apple Curry", "Dry Apple Curry", DryAppleCurry));
    list->addItem(new RecipeViewButton("64. Sweet Apple Curry", "Sweet Apple Curry", SweetAppleCurry));
    list->addItem(new RecipeViewButton("65. Bitter Apple Curry", "Bitter Apple Curry", BitterAppleCurry));
    list->addItem(new RecipeViewButton("66. Sour Apple Curry", "Sour Apple Curry", SourAppleCurry));

    // Bone Curries
    list->addItem(new tsl::elm::CategoryHeader("Bone Curries"));
    list->addItem(new RecipeViewButton("67. Bone Curry", "Bone Curry", BoneCurry));
    list->addItem(new RecipeViewButton("68. Spicy Bone Curry", "Spicy Bone Curry", SpicyBoneCurry));
    list->addItem(new RecipeViewButton("69. Dry Bone Curry", "Dry Bone Curry", DryBoneCurry));
    list->addItem(new RecipeViewButton("70. Sweet Bone Curry", "Sweet Bone Curry", SweetBoneCurry));
    list->addItem(new RecipeViewButton("71. Bitter Bone Curry", "Bitter Bone Curry", BitterBoneCurry));
    list->addItem(new RecipeViewButton("72. Sour Bone Curry", "Sour Bone Curry", SourBoneCurry));

    // Plenty-of-Potato Curries
    list->addItem(new tsl::elm::CategoryHeader("Plenty-of-Potato Curries"));
    list->addItem(new RecipeViewButton("73. Plenty-of-Potato Curry", "Plenty-of-Potato Curry", PlentyOfPotatoCurry));
    list->addItem(new RecipeViewButton("74. Spicy Plenty-of-Potato Curry", "Spicy Plenty-of-Potato Curry", SpicyPlentyOfPotatoCurry));
    list->addItem(new RecipeViewButton("75. Dry Plenty-of-Potato Curry", "Dry Plenty-of-Potato Curry", DryPlentyOfPotatoCurry));
    list->addItem(new RecipeViewButton("76. Sweet Plenty-of-Potato Curry", "Sweet Plenty-of-Potato Curry", SweetPlentyOfPotatoCurry));
    list->addItem(new RecipeViewButton("77. Bitter Plenty-of-Potato Curry", "Bitter Plenty-of-Potato Curry", BitterPlentyOfPotatoCurry));
    list->addItem(new RecipeViewButton("78. Sour Plenty-of-Potato Curry", "Sour Plenty-of-Potato Curry", SourPlentyOfPotatoCurry));

    // Herb Medley Curries
    list->addItem(new tsl::elm::CategoryHeader("Herb Medley Curries"));
    list->addItem(new RecipeViewButton("79. Herb Medley Curry", "Herb Medley Curry", HerbMedleyCurry));
    list->addItem(new RecipeViewButton("80. Spicy Herb Medley Curry", "Spicy Herb Medley Curry", SpicyHerbMedleyCurry));
    list->addItem(new RecipeViewButton("81. Dry Herb Medley Curry", "Dry Herb Medley Curry", DryHerbMedleyCurry));
    list->addItem(new RecipeViewButton("82. Sweet Herb Medley Curry", "Sweet Herb Medley Curry", SweetHerbMedleyCurry));
    list->addItem(new RecipeViewButton("83. Bitter Herb Medley Curry", "Bitter Herb Medley Curry", BitterHerbMedleyCurry));
    list->addItem(new RecipeViewButton("84. Sour Herb Medley Curry", "Sour Herb Medley Curry", SourHerbMedleyCurry));

    // Salad Curries
    list->addItem(new tsl::elm::CategoryHeader("Salad Curries"));
    list->addItem(new RecipeViewButton("85. Salad Curry", "Salad Curry", SaladCurry));
    list->addItem(new RecipeViewButton("86. Spicy Salad Curry", "Spicy Salad Curry", SpicySaladCurry));
    list->addItem(new RecipeViewButton("87. Dry Salad Curry", "Dry Salad Curry", DrySaladCurry));
    list->addItem(new RecipeViewButton("88. Sweet Salad Curry", "Sweet Salad Curry", SweetSaladCurry));
    list->addItem(new RecipeViewButton("89. Bitter Salad Curry", "Bitter Salad Curry", BitterSaladCurry));
    list->addItem(new RecipeViewButton("90. Sour Salad Curry", "Sour Salad Curry", SourSaladCurry));

    // Fried-Food Curries
    list->addItem(new tsl::elm::CategoryHeader("Fried-Food Curries"));
    list->addItem(new RecipeViewButton("91. Fried-Food Curry", "Fried-Food Curry", FriedFoodCurry));
    list->addItem(new RecipeViewButton("92. Spicy Fried-Food Curry", "Spicy Fried-Food Curry", SpicyFriedFoodCurry));
    list->addItem(new RecipeViewButton("93. Dry Fried-Food Curry", "Dry Fried-Food Curry", DryFriedFoodCurry));
    list->addItem(new RecipeViewButton("94. Sweet Fried-Food Curry", "Sweet Fried-Food Curry", SweetFriedFoodCurry));
    list->addItem(new RecipeViewButton("95. Bitter Fried-Food Curry", "Bitter Fried-Food Curry", BitterFriedFoodCurry));
    list->addItem(new RecipeViewButton("96. Sour Fried-Food Curry", "Sour Fried-Food Curry", SourFriedFoodCurry));

    // Boiled-Egg Curries
    list->addItem(new tsl::elm::CategoryHeader("Boiled-Egg Curries"));
    list->addItem(new RecipeViewButton("97. Boiled-Egg Curry", "Boiled-Egg Curry", BoiledEggCurry));
    list->addItem(new RecipeViewButton("98. Spicy Boiled-Egg Curry", "Spicy Boiled-Egg Curry", SpicyBoiledEggCurry));
    list->addItem(new RecipeViewButton("99. Dry Boiled-Egg Curry", "Dry Boiled-Egg Curry", DryBoiledEggCurry));
    list->addItem(new RecipeViewButton("100. Sweet Boiled-Egg Curry", "Sweet Boiled-Egg Curry", SweetBoiledEggCurry));
    list->addItem(new RecipeViewButton("101. Bitter Boiled-Egg Curry", "Bitter Boiled-Egg Curry", BitterBoiledEggCurry));
    list->addItem(new RecipeViewButton("102. Sour Boiled-Egg Curry", "Sour Boiled-Egg Curry", SourBoiledEggCurry));

    // Tropical Curries
    list->addItem(new tsl::elm::CategoryHeader("Tropical Curries"));
    list->addItem(new RecipeViewButton("103. Tropical Curry", "Tropical Curry", TropicalCurry));
    list->addItem(new RecipeViewButton("104. Spicy Tropical Curry", "Spicy Tropical Curry", SpicyTropicalCurry));
    list->addItem(new RecipeViewButton("105. Dry Tropical Curry", "Dry Tropical Curry", DryTropicalCurry));
    list->addItem(new RecipeViewButton("106. Sweet Tropical Curry", "Sweet Tropical Curry", SweetTropicalCurry));
    list->addItem(new RecipeViewButton("107. Bitter Tropical Curry", "Bitter Tropical Curry", BitterTropicalCurry));
    list->addItem(new RecipeViewButton("108. Sour Tropical Curry", "Sour Tropical Curry", SourTropicalCurry));

    // Cheese-Covered Curries
    list->addItem(new tsl::elm::CategoryHeader("Cheese-Covered Curries"));
    list->addItem(new RecipeViewButton("109. Cheese-Covered Curry", "Cheese-Covered Curry", CheeseCoveredCurry));
    list->addItem(new RecipeViewButton("110. Spicy Cheese-Covered Curry", "Spicy Cheese-Covered Curry", SpicyCheeseCoveredCurry));
    list->addItem(new RecipeViewButton("111. Dry Cheese-Covered Curry", "Dry Cheese-Covered Curry", DryCheeseCoveredCurry));
    list->addItem(new RecipeViewButton("112. Sweet Cheese-Covered Curry", "Sweet Cheese-Covered Curry", SweetCheeseCoveredCurry));
    list->addItem(new RecipeViewButton("113. Bitter Cheese-Covered Curry", "Bitter Cheese-Covered Curry", BitterCheeseCoveredCurry));
    list->addItem(new RecipeViewButton("114. Sour Cheese-Covered Curry", "Sour Cheese-Covered Curry", SourCheeseCoveredCurry));

    // Seasoned Curries
    list->addItem(new tsl::elm::CategoryHeader("Seasoned Curries"));
    list->addItem(new RecipeViewButton("115. Seasoned Curry", "Seasoned Curry", SeasonedCurry));
    list->addItem(new RecipeViewButton("116. Spicy Seasoned Curry", "Spicy Seasoned Curry", SpicySeasonedCurry));
    list->addItem(new RecipeViewButton("117. Dry Seasoned Curry", "Dry Seasoned Curry", DrySeasonedCurry));
    list->addItem(new RecipeViewButton("118. Sweet Seasoned Curry", "Sweet Seasoned Curry", SweetSeasonedCurry));
    list->addItem(new RecipeViewButton("119. Bitter Seasoned Curry", "Bitter Seasoned Curry", BitterSeasonedCurry));
    list->addItem(new RecipeViewButton("120. Sour Seasoned Curry", "Sour Seasoned Curry", SourSeasonedCurry));

    // Whipped-Cream Curries
    list->addItem(new tsl::elm::CategoryHeader("Whipped-Cream Curries"));
    list->addItem(new RecipeViewButton("121. Whipped-Cream Curry", "Whipped-Cream Curry", WhippedCreamCurry));
    list->addItem(new RecipeViewButton("122. Spicy Whipped-Cream Curry", "Spicy Whipped-Cream Curry", SpicyWhippedCreamCurry));
    list->addItem(new RecipeViewButton("123. Dry Whipped-Cream Curry", "Dry Whipped-Cream Curry", DryWhippedCreamCurry));
    list->addItem(new RecipeViewButton("124. Sweet Whipped-Cream Curry", "Sweet Whipped-Cream Curry", SweetWhippedCreamCurry));
    list->addItem(new RecipeViewButton("125. Bitter Whipped-Cream Curry", "Bitter Whipped-Cream Curry", BitterWhippedCreamCurry));
    list->addItem(new RecipeViewButton("126. Sour Whipped-Cream Curry", "Sour Whipped-Cream Curry", SourWhippedCreamCurry));

    // Decorative Curries
    list->addItem(new tsl::elm::CategoryHeader("Decorative Curries"));
    list->addItem(new RecipeViewButton("127. Decorative Curry", "Decorative Curry", DecorativeCurry));
    list->addItem(new RecipeViewButton("128. Spicy Decorative Curry", "Spicy Decorative Curry", SpicyDecorativeCurry));
    list->addItem(new RecipeViewButton("129. Dry Decorative Curry", "Dry Decorative Curry", DryDecorativeCurry));
    list->addItem(new RecipeViewButton("130. Sweet Decorative Curry", "Sweet Decorative Curry", SweetDecorativeCurry));
    list->addItem(new RecipeViewButton("131. Bitter Decorative Curry", "Bitter Decorative Curry", BitterDecorativeCurry));
    list->addItem(new RecipeViewButton("132. Sour Decorative Curry", "Sour Decorative Curry", SourDecorativeCurry));

    // Coconut Curries
    list->addItem(new tsl::elm::CategoryHeader("Coconut Curries"));
    list->addItem(new RecipeViewButton("133. Coconut Curry", "Coconut Curry", CoconutCurry));
    list->addItem(new RecipeViewButton("134. Spicy Coconut Curry", "Spicy Coconut Curry", SpicyCoconutCurry));
    list->addItem(new RecipeViewButton("135. Dry Coconut Curry", "Dry Coconut Curry", DryCoconutCurry));
    list->addItem(new RecipeViewButton("136. Sweet Coconut Curry", "Sweet Coconut Curry", SweetCoconutCurry));
    list->addItem(new RecipeViewButton("137. Bitter Coconut Curry", "Bitter Coconut Curry", BitterCoconutCurry));
    list->addItem(new RecipeViewButton("138. Sour Coconut Curry", "Sour Coconut Curry", SourCoconutCurry));

    // Instant Noodle Curries
    list->addItem(new tsl::elm::CategoryHeader("Instant Noodle Curries"));
    list->addItem(new RecipeViewButton("139. Instant Noodle Curry", "Instant Noodle Curry", InstantNoodleCurry));
    list->addItem(new RecipeViewButton("140. Spicy Instant Noodle Curry", "Spicy Instant Noodle Curry", SpicyInstantNoodleCurry));
    list->addItem(new RecipeViewButton("141. Dry Instant Noodle Curry", "Dry Instant Noodle Curry", DryInstantNoodleCurry));
    list->addItem(new RecipeViewButton("142. Sweet Instant Noodle Curry", "Sweet Instant Noodle Curry", SweetInstantNoodleCurry));
    list->addItem(new RecipeViewButton("143. Bitter Instant Noodle Curry", "Bitter Instant Noodle Curry", BitterInstantNoodleCurry));
    list->addItem(new RecipeViewButton("144. Sour Instant Noodle Curry", "Sour Instant Noodle Curry", SourInstantNoodleCurry));

    // Burger-Steak Curries
    list->addItem(new tsl::elm::CategoryHeader("Burger-Steak Curries"));
    list->addItem(new RecipeViewButton("145. Burger-Steak Curry", "Burger-Steak Curry", BurgerSteakCurry));
    list->addItem(new RecipeViewButton("146. Spicy Burger-Steak Curry", "Spicy Burger-Steak Curry", SpicyBurgerSteakCurry));
    list->addItem(new RecipeViewButton("147. Dry Burger-Steak Curry", "Dry Burger-Steak Curry", DryBurgerSteakCurry));
    list->addItem(new RecipeViewButton("148. Sweet Burger-Steak Curry", "Sweet Burger-Steak Curry", SweetBurgerSteakCurry));
    list->addItem(new RecipeViewButton("149. Bitter Burger-Steak Curry", "Bitter Burger-Steak Curry", BitterBurgerSteakCurry));
    list->addItem(new RecipeViewButton("150. Sour Burger-Steak Curry", "Sour Burger-Steak Curry", SourBurgerSteakCurry));

    // Gigantamax Curry
    list->addItem(new tsl::elm::CategoryHeader("Special Curries"));
    list->addItem(new RecipeViewButton("151. Gigantamax Curry", "Gigantamax Curry", GigantamaxCurry));

    frame->setContent(list);

    return frame;
  }

};

