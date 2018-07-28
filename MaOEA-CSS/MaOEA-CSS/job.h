#pragma once
#include<iostream>
#include<vector>
#include"constant.h"
using namespace std;
class job
{
private:
	int J_Inum;//������
	int J_Ip;//�����ӹ�ʱ��
	int J_Is;//�����ߴ�
	int J_Ir;//��������ʱ��
	int J_Id;//������ֹʱ��
	int T_j;//�������ӳ�ʱ��
	int C_j;//�������깤ʱ�䣬����U_j
public:
	job() :J_Inum(0),J_Ip(0), J_Is(0), J_Ir(0), J_Id(0), C_j(0)
	{

	};
	job(int I_num,int I_p, int I_w, int I_s, int I_r, int I_d) :J_Inum(I_num),J_Ip(I_p), J_Is(I_s), J_Ir(I_r), J_Id(I_d),C_j(0)
	{

	};
	job(int I_num):J_Inum(I_num), J_Ip(0), J_Is(0), J_Ir(0), J_Id(0), C_j(0)
	{

	};
	~job() {};
	void set_num(const int & I_num);//����J_Inum
	int get_num() const;			//��ȡJ_Inum
	void set_p(const int & I_p);//����J_Ip
	int get_p() const;			//��ȡJ_Ip
	void set_s(const int & I_s);//����J_Is
	int get_s() const;			//��ȡJ_Is
	void set_r(const int & I_r);//����J_Ir
	int get_r() const;			//��ȡJ_Ir                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ;
	void set_d(const int & I_d);//����J_Id
	int get_d() const;			//��ȡJ_Id
	void set_C_j(const int & I_C_j);//����C_j
	int get_C_j() const;			//��ȡC_j
	void set_T_j(const int & I_T_j);//����T_j
	int get_T_j();					//��ȡT_j
};
class batch
{
private:
	int B_Inum;//���ı��
	int B_Ip;//���ļӹ�ʱ��
	int B_Is;//���ĳߴ�
	int B_IPb;//�����깤ʱ��
	int B_ICb;//�����깤ʱ��
	int B_ISb;//���Ŀ���ʱ��
	int B_ITb;//��������ʱ��
	int B_IMs;//�����ڻ���������
	int B_IMnum;//�����ڵĻ�����
	int B_Irs;//����ǰ��ʣ��ռ�
public:
	vector<job> v_Bjobs;//���еĹ�������
	void cal_B_Pb();//���㵱ǰ���ļӹ�ʱ��
	void cal_B_Cb();//���㵱ǰ�����깤ʱ��
	void cal_B_Sb();//���㵱ǰ���Ŀ���ʱ��
	void cal_B_Tb();//���㵱ǰ��������ʱ��
	batch() :B_Inum(0),B_Ip(0),B_Is(0),B_ICb(0),B_ISb(0),B_ITb(0),B_IMs(M_s), B_IMnum(0), B_Irs(M_s), B_IPb(0)
	{

	};
	batch(int Inum) :B_Inum(Inum), B_Ip(0), B_Is(0), B_ICb(0), B_ISb(0), B_ITb(0), B_IMs(M_s), B_IMnum(0),B_Irs(M_s), B_IPb(0)
	{

	};
	batch(int Inum,int Ip,int Iw,int Is,int ICb,int ISb,int ITb,int IMnum) :B_Inum(Inum), B_Ip(Ip), B_Is(Is), B_ICb(ICb), 
		B_ISb(ISb), B_ITb(ITb),B_IMs(M_s),B_IMnum(IMnum), B_Irs(M_s)
	{

	};
	~batch() 
	{

	};
	void set_num(const int & I_num);//����B_Inum
	int get_num() const;			//��ȡB_Inum
	void set_p(const int & I_p);	//����B_Ip
	int get_p() const;				//��ȡB_Ip
	void set_s(const int & I_s);	//����B_Is
	int get_s() const;				//��ȡB_Is
	void set_Pb(const int & I_Pb);	//����B_IPb
	int get_Pb() const;				//��ȡB_IPb
	void set_Cb(const int & I_Cb);	//����B_ICb
	int get_Cb() const;				//��ȡB_ICb
	void set_Sb(const int & I_Sb);	//����B_ISb
	int get_Sb() const;				//��ȡB_ISb
	void set_Tb(const int & I_Tb);	//����B_ITb
	int get_Tb() const;				//��ȡB_ITb
	void set_Ms(const int & I_Ms);	//����B_IMs
	int get_Ms() const;				//��ȡB_IMs
	void set_Mnum(const int & I_Mnum);//����B_IMnum
	int get_Mnum() const;			//��ȡB_IMnum
	void set_rs(const int & I_rs);//����B_Irs
	int get_rs() const;			 //��ȡB_Irs
};

class machine
{
private:
	int M_Inum;//�����ı��
	int M_IL;//�����Ĺ���
	int M_Is;//����������
	int M_I_Cmax;//������Cmax
	int M_I_U;//����������������
	int M_I_Tmax;//����������ʱ��
	int M_Bcount;//������������
public:
	vector<batch> v_Mbatches;//�����ϵ�������
	void cal_M_U();//���㵱ǰ����������������
	void cal_M_TC();//���㵱ǰ�������ܺ�
	void cal_M_T();//���㵱ǰ�������������ʱ��
	machine() :M_Inum(0), M_IL(0), M_Is(M_s),M_I_Cmax(0),M_I_U(0),M_I_Tmax(0),M_Bcount(0)
	{

	};
	machine(int Inum) :M_Inum(Inum),M_Is(M_s), M_I_Cmax(0), M_I_U(0), M_I_Tmax(0), M_Bcount(0)
	{
		if (Inum > 0 && Inum <= M_1)
		{
			M_IL = L_1;
		}
		else if (Inum > M_1 && Inum <= (M_1+M_2))
		{
			M_IL = L_2;
		}
		else if(Inum >(M_1 + M_2)&& Inum<= (M_1 + M_2+M_3))
		{
			M_IL = L_3;
		}
	};
	~machine() {};
	void set_num(const int & I_num);	//����M_Inum
	int get_num() const;				//��ȡM_Inum
	void set_L(const int & I_L);		//����M_IL
	int get_L() const;					//��ȡM_IL
	void set_s(const int & I_s);		//����M_Is
	int get_s() const;					//��ȡM_Is
	void set_Cmax(const int & I_Cmax);	//����M_I_Cmax
	int get_Cmax() const;				//��ȡM_I_Cmax
	void set_U(const int & I_U);	//����M_I_U
	int get_U() const;				//��ȡM_I_U
	void set_Tmax(const int & I_Tmax);	//����M_I_Tmax
	int get_Tmax() const;				//��ȡM_I_Tmax
	void set_B_num(const int & I_Bnum);	//����M_Bcount
	int get_B_num() const;				//��ȡM_Bcount

};

class scheme
{
private:
	int S_T;//����ʱ��
	int S_U;//��������
	int TC;//�ܺ�
public:
	vector<machine> v_Smachines;	
	void cal_Fitness();//��������ʱ��,��������,�ܺ�
	scheme() :S_T(0),S_U(0),TC(0){};
	~scheme() {};

};
class chrom
{
private:
	int ChromLength;//����
public:
	scheme chro_sche;//��Ⱦɫ����е���
	vector<int> ChromFitness;//��Ӧ��
	vector<job> v_chromejobs;
	chrom() :ChromLength(Job_Num)
	{
		v_chromejobs.reserve(Job_Num);
		ChromFitness.reserve(Obj_Num);
	};
	~chrom() {};
	void set_Chro_Length(const int &Length);
	int get_Chro_Length()const;

};