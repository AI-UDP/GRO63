cd CellEngine
make MODE=$1 -B
cd ..
cd CellNutrient
make MODE=$1 -B
cd ..
cd cellsignals
make MODE=$1 -B
cd ..
cd uint256_t-master
make MODE=$1 -B
cd ..
cd CellPro
make MODE=$1 -B
cd ..
