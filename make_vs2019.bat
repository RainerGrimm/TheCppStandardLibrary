cmake -G "Visual Studio 16 2019" -DBOOST_PATH=c:/Work/Libraries/boost_1_73_0/ -DGTEST_PATH=c:/Work/Libraries/googletest_1_10/googletest/include/ -DGTEST_PATH_LIB=c:/Work/Libraries/googletest_1_10/lib/ -DCATCH_PATH=c:/Work/Libraries/Catch2/single_include/ -DUSE_RANGES_V3=ON -DRANGES_PATH=c:/Work/Libraries/range-v3-master/include/ -DCPPCORO_PATH=c:/Work/Libraries/cppcoro-master -S .\ -B .\build