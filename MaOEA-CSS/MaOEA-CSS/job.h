#pragma once
#include<iostream>
#include<vector>
#include"constant.h"
using namespace std;
class job
{
private:
	int J_Inum;//工件号
	int J_Ip;//工件加工时间
	int J_Is;//工件尺寸
	int J_Ir;//工件到达时间
	int J_Id;//工件截止时间
	int T_j;//工件的延迟时间
	int C_j;//工件的完工时间，计算U_j
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
	void set_num(const int & I_num);//更改J_Inum
	int get_num() const;			//获取J_Inum
	void set_p(const int & I_p);//更改J_Ip
	int get_p() const;			//获取J_Ip
	void set_s(const int & I_s);//更改J_Is
	int get_s() const;			//获取J_Is
	void set_r(const int & I_r);//更改J_Ir
	int get_r() const;			//获取J_Ir                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ;
	void set_d(const int & I_d);//更改J_Id
	int get_d() const;			//获取J_Id
	void set_C_j(const int & I_C_j);//更改C_j
	int get_C_j() const;			//获取C_j
	void set_T_j(const int & I_T_j);//更改T_j
	int get_T_j();					//获取T_j
};
class batch
{
private:
	int B_Inum;//批的编号
	int B_Ip;//批的加工时间
	int B_Is;//批的尺寸
	int B_IPb;//批的完工时间
	int B_ICb;//批的完工时间
	int B_ISb;//批的开工时间
	int B_ITb;//批的延误时间
	int B_IMs;//批所在机器的容量
	int B_IMnum;//批所在的机器号
	int B_Irs;//批当前的剩余空间
public:
	vector<job> v_Bjobs;//批中的工件集合
	void cal_B_Pb();//计算当前批的加工时间
	void cal_B_Cb();//计算当前批的完工时间
	void cal_B_Sb();//计算当前批的开工时间
	void cal_B_Tb();//计算当前批的延误时间
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
	void set_num(const int & I_num);//更改B_Inum
	int get_num() const;			//获取B_Inum
	void set_p(const int & I_p);	//更改B_Ip
	int get_p() const;				//获取B_Ip
	void set_s(const int & I_s);	//更改B_Is
	int get_s() const;				//获取B_Is
	void set_Pb(const int & I_Pb);	//更改B_IPb
	int get_Pb() const;				//获取B_IPb
	void set_Cb(const int & I_Cb);	//更改B_ICb
	int get_Cb() const;				//获取B_ICb
	void set_Sb(const int & I_Sb);	//更改B_ISb
	int get_Sb() const;				//获取B_ISb
	void set_Tb(const int & I_Tb);	//更改B_ITb
	int get_Tb() const;				//获取B_ITb
	void set_Ms(const int & I_Ms);	//更改B_IMs
	int get_Ms() const;				//获取B_IMs
	void set_Mnum(const int & I_Mnum);//更改B_IMnum
	int get_Mnum() const;			//获取B_IMnum
	void set_rs(const int & I_rs);//更改B_Irs
	int get_rs() const;			 //获取B_Irs
};

class machine
{
private:
	int M_Inum;//机器的编号
	int M_IL;//机器的功率
	int M_Is;//机器的容量
	int M_I_Cmax;//机器的Cmax
	int M_I_U;//机器的总误工任务数
	int M_I_Tmax;//机器的延误时间
	int M_Bcount;//机器当中批数
public:
	vector<batch> v_Mbatches;//机器上的批集合
	void cal_M_U();//计算当前机器的总误工任务数
	void cal_M_TC();//计算当前机器的能耗
	void cal_M_T();//计算当前机器的最大延误时间
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
	void set_num(const int & I_num);	//更改M_Inum
	int get_num() const;				//获取M_Inum
	void set_L(const int & I_L);		//更改M_IL
	int get_L() const;					//获取M_IL
	void set_s(const int & I_s);		//更改M_Is
	int get_s() const;					//获取M_Is
	void set_Cmax(const int & I_Cmax);	//更改M_I_Cmax
	int get_Cmax() const;				//获取M_I_Cmax
	void set_U(const int & I_U);	//更改M_I_U
	int get_U() const;				//获取M_I_U
	void set_Tmax(const int & I_Tmax);	//更改M_I_Tmax
	int get_Tmax() const;				//获取M_I_Tmax
	void set_B_num(const int & I_Bnum);	//更改M_Bcount
	int get_B_num() const;				//获取M_Bcount

};

class scheme
{
private:
	int S_T;//总误工时间
	int S_U;//总误工数量
	int TC;//能耗
public:
	vector<machine> v_Smachines;	
	void cal_Fitness();//计算总误工时间,总误工数量,能耗
	scheme() :S_T(0),S_U(0),TC(0){};
	~scheme() {};

};
class chrom
{
private:
	int ChromLength;//长度
public:
	scheme chro_sche;//对染色体进行调度
	vector<int> ChromFitness;//适应度
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