
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


/**
 * Phalcon\Mvc\Model\ValidationFailed
 *
 * This exception is generated when a model fails to save a record
 * Phalcon\Mvc\Model must be set up to have this behavior
 */
ZEPHIR_INIT_CLASS(Phalcon_Mvc_Model_ValidationFailed) {

	ZEPHIR_REGISTER_CLASS_EX(Phalcon\\Mvc\\Model, ValidationFailed, phalcon, mvc_model_validationfailed, phalcon_mvc_model_exception_ce, NULL, 0);

	zend_declare_property_null(phalcon_mvc_model_validationfailed_ce, SL("_model"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(phalcon_mvc_model_validationfailed_ce, SL("_messages"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

