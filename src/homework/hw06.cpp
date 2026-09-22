#include "checker.h"

static bool ID6() {
    Vec V;

    // Add your student ID and message here, in ascending student ID order.
    V.emplace_back("109350025", "I want to become a better C++ programmer.");
    V.emplace_back("112062119", "I hope to gain a lot from this course !");
    V.emplace_back("112062214", "耶");
    V.emplace_back("112062313", "I want to enhance my understanding of modern C++.");
    V.emplace_back("113062118", "I want to learn more coding about jobs.");
    V.emplace_back(
        "114062216",
        "在茈發動前的41秒內，新宿再次響起了五條悟的吟唱。“九綱”“偏光”“烏與聲明”“表裡之間”\
                                ，宿儺明白自己再也沒有任何機會阻止茈的誕生了，無限制的虛式如同核爆一般在新宿亮起沖天\
                                的光芒，魔虛羅的輪盤在茈中灰飛煙滅，廢墟之中，全力護住自己的宿儺無力的靠在殘破的建築\
                                上支持身體，他的左手和大腿都被這一擊吞噬殆盡，同樣傷痕累累的五條悟出現在宿儺面前，宿\
                                儺立刻強迫自己不再倚靠牆壁，堂堂正正站在五條悟面前，但是在咒力同源的影響下，五條悟所\
                                承受的傷害被大大削弱，在反轉術式的治療下五條悟的身體再次恢復，對五條悟來說，決定性的\
                                一擊遠距離“茈”只是其即興創作，結果魔虛羅被秒，“看來完成的還算不錯”，誰能想到魔虛羅和\
                                宿儺發了瘋阻止的只是五條悟剛剛開發的技能， 五條悟在茈發動前的短短41秒內見招拆招，完\
                                成了數個幾乎可以編入教科書的隨機應變操作。虎杖呆呆的看著屏幕仍不可置信，“也就是說……”\
                                ，“沒錯，是五條悟贏了！”");
    V.emplace_back("123000001", "Example student: I want to learn C++ and Git.");

    return isGoodVector(6, V);
}

REGISTER_HOOK(ID6);
