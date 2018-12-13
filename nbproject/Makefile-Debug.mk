#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/API_GestaoUser.o \
	${OBJECTDIR}/API_Leitura.o \
	${OBJECTDIR}/API_Menus.o \
	${OBJECTDIR}/API_Utils.o \
	${OBJECTDIR}/Gestao_User.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lp_grupo83_lei.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lp_grupo83_lei.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lp_grupo83_lei ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/API_GestaoUser.o: API_GestaoUser.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -Ibuild -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/API_GestaoUser.o API_GestaoUser.c

${OBJECTDIR}/API_Leitura.o: API_Leitura.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -Ibuild -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/API_Leitura.o API_Leitura.c

${OBJECTDIR}/API_Menus.o: API_Menus.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -Ibuild -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/API_Menus.o API_Menus.c

${OBJECTDIR}/API_Utils.o: API_Utils.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -Ibuild -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/API_Utils.o API_Utils.c

${OBJECTDIR}/Gestao_User.o: Gestao_User.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -Ibuild -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gestao_User.o Gestao_User.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -Ibuild -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/lp_grupo83_lei.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
