#ifndef __LIBKMS_DETAIL_STD_TYPES_HPP__
#define __LIBKMS_DETAIL_STD_TYPES_HPP__

#include <string>

namespace LIBKMS_namespace {

namespace std_types {

//	Стандартные типы параметров
typedef int32_t		tInt;
typedef double		tReal;
typedef bool		tBool;
typedef std::string	tString;

//	Имена стандартных типов
const std::string	KMS_BOOL_TYPE_NAME		= "лог";
const std::string	KMS_INT_TYPE_NAME		= "цел";
const std::string	KMS_REAL_TYPE_NAME		= "вещ";
const std::string	KMS_STRING_TYPE_NAME	= "строка";

}	//	namespace LIBKMS_namespace::std_types


namespace types {

//	Стандартные значения
template< typename T >
inline T default_value() { return T(); }

//	Соответствие названий и типов
template< typename T >
inline std::string type_name();


template<> inline std_types::tInt default_value() { return 0; }
template<> inline std_types::tBool default_value() { return false; }
template<> inline std_types::tReal default_value() { return 0.0; }
template<> inline std_types::tString default_value()
	{ return std_types::tString(); }


template<> inline std::string type_name< std_types::tInt >()
{ return std_types::KMS_INT_TYPE_NAME; }

template<> inline std::string type_name< std_types::tBool >()
{ return std_types::KMS_BOOL_TYPE_NAME; }

template<> inline std::string type_name< std_types::tReal >()
{ return std_types::KMS_REAL_TYPE_NAME; }

template<> inline std::string type_name< std_types::tString >()
{ return std_types::KMS_STRING_TYPE_NAME; }

}	//	namespace LIBKMS_namespace::types

}	//	namespace LIBKMS_namespace

#endif
