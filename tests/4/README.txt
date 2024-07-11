Hello,

I am loading this module 'OpenFOAM/v2306-foss-2022b' but I am getting an error when I run my application. I am running "blockMesh" and is showing this error:

"blockMesh: error while loading shared libraries: libmpi.so.40: cannot open shared object file: No such file or directory"

Looking online it suggested to use ldd to check, which shows this:

$ ldd $(which blockMesh)
	linux-vdso.so.1 (0x00007ffcbc5fa000)
	libblockMesh.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libblockMesh.so (0x000014742466e000)
	libfileFormats.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libfileFormats.so (0x0000147424570000)
	libmeshTools.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libmeshTools.so (0x0000147423d8e000)
	libdynamicMesh.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libdynamicMesh.so (0x00001474238c5000)
	libOpenFOAM.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libOpenFOAM.so (0x0000147422d90000)
	libdl.so.2 => /lib64/libdl.so.2 (0x0000147422b8c000)
	libmpi.so.40 => not found
	libstdc++.so.6 => /sw-eb/software/GCCcore/12.2.0/lib64/libstdc++.so.6 (0x000014742283e000)
	libm.so.6 => /lib64/libm.so.6 (0x00001474224bc000)
	libgcc_s.so.1 => /sw-eb/software/GCCcore/12.2.0/lib64/libgcc_s.so.1 (0x0000147424544000)
	libpthread.so.0 => /lib64/libpthread.so.0 (0x000014742229c000)
	libc.so.6 => /lib64/libc.so.6 (0x0000147421ed7000)
	libPstream.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/eb-mpi/libPstream.so (0x0000147424516000)
	libsurfMesh.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libsurfMesh.so (0x0000147421c53000)
	libfiniteVolume.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libfiniteVolume.so (0x000014741f8e5000)
	libextrudeModel.so => /sw-eb/software/OpenFOAM/v2306-foss-2022b/OpenFOAM-v2306/platforms/linux64GccDPInt32Opt/lib/libextrudeModel.so (0x000014741f8b8000)
	libz.so.1 => /sw-eb/software/zlib/1.2.12-GCCcore-12.2.0/lib/libz.so.1 (0x000014741f89d000)
	/lib64/ld-linux-x86-64.so.2 (0x00001474244de000)
	libopen-rte.so.40 => /sw-eb/software/OpenMPI/4.1.4-GCC-12.2.0/lib/libopen-rte.so.40 (0x000014741f7e5000)
	libopen-pal.so.40 => /sw-eb/software/OpenMPI/4.1.4-GCC-12.2.0/lib/libopen-pal.so.40 (0x000014741f734000)
	librt.so.1 => /lib64/librt.so.1 (0x000014741f52c000)
	libutil.so.1 => /lib64/libutil.so.1 (0x000014741f328000)
	libhwloc.so.15 => /sw-eb/software/hwloc/2.8.0-GCCcore-12.2.0/lib/libhwloc.so.15 (0x000014741f2c9000)
	libpciaccess.so.0 => /sw-eb/software/libpciaccess/0.17-GCCcore-12.2.0/lib/libpciaccess.so.0 (0x000014741f2bd000)
	libxml2.so.2 => /sw-eb/software/libxml2/2.10.3-GCCcore-12.2.0/lib/libxml2.so.2 (0x000014741f15a000)
	liblzma.so.5 => /sw-eb/software/XZ/5.2.7-GCCcore-12.2.0/lib/liblzma.so.5 (0x000014741f131000)
	libevent_core-2.1.so.7 => /sw-eb/software/libevent/2.1.12-GCCcore-12.2.0/lib/libevent_core-2.1.so.7 (0x000014741f0fa000)
	libevent_pthreads-2.1.so.7 => /sw-eb/software/libevent/2.1.12-GCCcore-12.2.0/lib/libevent_pthreads-2.1.so.7 (0x000014741f0f5000)

Doing some investigation I see that the library libmpi.so.40 is available in this location: "/sw-eb/software/OpenMPI/4.1.4-GCC-12.2.0/lib/"

Can you assist me on how to get my program to use that?

Thank you,

John
