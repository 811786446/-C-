#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

enum{
	SPADES,          //����
	HEARTS,          //����
	CLUBS,           //÷��
	DIAMONDS,        //����
	JOKER            //��С��
};

class Poker{
	unsigned char m_type;
	unsigned int m_point;
public:
	void makePoker(char type, int point)
	{
		m_type = type;

		m_point = point;
		if (type = JOKER)
		{
			m_point += 13;
		}
	}

	void outputPoker()
	{
		char *type[5] = { "����", "����", "÷��", "����"};
		char *point[16] = { "", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "С��", "����" };
		printf("%s%s", type[m_type], point[m_point]);
	}

	bool cmppoker(Poker tmp)
	{
		return (m_point < tmp.m_point) ||
			(m_point == tmp.m_point && m_type > tmp.m_type);
	}
	//�ж���Ч��
	bool isEff()
	{
		if (m_type == JOKER &&
			(m_point == 14 || m_point == 15))
		{
			return true;
		}

		if (m_type > 3 || m_point - 1 > 13)
		{	
			return false;
		}
		return true;
	}
};

class Player{
	Poker m_HandCard[18];
	int m_size;

public:
	Player()
	{
		m_size = 0;
	}
	void getCard(Poker newCard)
	{
		Poker tmp = newCard;
		int i;
		for (i = m_size; i > 0, m_HandCard[i - 1].cmppoker(tmp); i--)
		{
			m_HandCard[i] = m_HandCard[i - 1];
		}
		m_HandCard[i] = newCard;
		m_size++;
	}
	void showCard()
	{
		for (auto &i : m_HandCard)
		{
			i.outputPoker();
			putchar(' ');
		}
		putchar('\n');
	}
};

void PokerTest()
{
	//���������
	srand((unsigned)time(NULL));
	Player p1;
	Poker tmp;
	int i;
	for (i = 0; i < 18; i++)
	{
		tmp.makePoker(rand() % 4, rand() % 13 + 1);
		p1.getCard(tmp);
	}
	p1.showCard();
}

int randnum(Poker *cardHeap)
{
	int tmp = rand() % 54;
	while (1)
	{
		if (cardHeap[tmp].isEff())
		{
			
			return tmp;
		}
		else
		{
			tmp++;
			if (tmp = 54)
			{
				tmp = 0;
			}
		}
	}
}

int main()
{
	Poker tmp[54];
	int j = 0;
	int i = 0;
	Player ayi;
	Player laoye;
	Player miao;
	for (auto &i : tmp)
	{
		//����������
		i.makePoker(j / 13, j % 13 + 1);
		j++;
	}
	srand((unsigned)time(NULL));
	int delcard;
	for (i = 0; i < 18; i++)
	{
		delcard = randnum(tmp);
		ayi.getCard(tmp[randnum(tmp)]);
		tmp[delcard].makePoker(0, 0);
		delcard = randnum(tmp);
		laoye.getCard(tmp[randnum(tmp)]);
		tmp[delcard].makePoker(0, 0);
		delcard = randnum(tmp);
		miao.getCard(tmp[randnum(tmp)]);
		tmp[delcard].makePoker(0, 0);
	}
	ayi.showCard();
	laoye.showCard();
	miao.showCard();
	return 0;
}











































