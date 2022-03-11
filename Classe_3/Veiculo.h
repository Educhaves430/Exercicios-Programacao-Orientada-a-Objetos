#pragma once

class Veiculo
{
public:
	int vel = 0;
	int tipo;
	Veiculo(int tp);
	int getVelMax();
	bool getLigado();
	void setLigado(int l);

private:
	void setVelMax(int vm);
	std::string nome;
	int VelMax;
	bool ligado;
};

bool Veiculo::getLigado() {
	return ligado;
}

void Veiculo::setLigado(int l) {
	if (l == 1)
		ligado = true;
	else if (l == 0)
		ligado = false;
}

int Veiculo::getVelMax() {
	return VelMax;
}

void Veiculo::setVelMax(int vm) {
	VelMax = vm;
}

Veiculo::Veiculo(int tp) {
	tipo = tp;

	if (tp == 1) {
		nome = "Carro";
		setVelMax(200);
	}
	else if (tp == 2) {
		nome = "Aviao";
		setVelMax(800);
	}
	else if (tp == 3) {
		nome = "Carro";
		setVelMax(500);
	}
	setLigado(0);
}