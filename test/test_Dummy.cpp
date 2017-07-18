#include <boost/test/unit_test.hpp>
#include <plain_cxx11_package/Dummy.hpp>

using namespace plain_cxx11_package;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    plain_cxx11_package::DummyClass dummy;
    dummy.welcome();
}
