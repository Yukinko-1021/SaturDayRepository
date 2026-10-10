#include<iostream>
using namespace std;

//Playerクラスを定義
class Player
{
public:

	int hp = 100;
	//プレイヤーにダメージを与える関数
	void Damage()
	{
		hp -= 10;
	}


};


int main(void)
{
	//Playerのオブジェクトをインスタンス化
	Player player;

	//Playerのオブジェクトのアドレスをポインタに保存する
	Player* pPlayer = &player;

	//ポインターｗｐを使ってDamage関数を呼び出すことも出来ます
	pPlayer->Damage();

	cout << "Player : HP " << player.hp << endl;

	return 0;
}