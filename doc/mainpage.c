/**
\mainpage

\b ALL_TEMPLATE

RLTOS is a real time operating system targetted at static allocation of objects and small embedded system.
The name RLTOS comes from a play on the words RL78 and RTOS as at inception the systems first target was the RL78.

An objective of the code is to have complete unit test coverage of the kernel using <a href="https://cpputest.github.io/">CppUTest</a>.


\section codeapi Code API

Provide links to specific auto-generated API documentation within your
package that is of particular interest to a reader. Doxygen will
document pretty much every part of your code, so do your best here to
point the reader to the actual API.

If your codebase is fairly large or has different sets of APIs, you
should use the doxygen 'group' tag to keep these APIs together. For
example, the roscpp documentation has 'libros' and 'botherder' groups
so that those can be viewed separately. The rospy documentation
similarly has a 'client-api' group that pulls together APIs for a
Client API page.


\section rosapi ROS API

Every ROS name in your code must be documented. Names are very
important in ROS because they are the API to nodes and services. They
are also capable of being remapped on the command-line, so it is VERY
IMPORTANT THAT YOU LIST NAMES AS THEY APPEAR IN THE CODE. It is also
important that you write your code so that the names can be easily
remapped.

List of nodes:
- \b node_name1
- \b node_name2


<!-- START: copy for each node -->

<hr>

\subsection node_name node_name

node_name does (provide a basic description of your node)

\subsubsection Usage
\verbatim
$ node_type1 [standard ROS args]
\endverbatim

\par Example

\verbatim
$ node_type1
\endverbatim


\subsubsection topics ROS topics

Subscribes to:
- \b "in": [std_msgs/FooType] description of in

Publishes to:
- \b "out": [std_msgs/FooType] description of out

\subsubsection parameters ROS parameters

Reads the following parameters from the parameter server

- \b "~param_name" : \b [type] description of param_name
- \b "~my_param" : \b [string] description of my_param

Sets the following parameters on the parameter server

- \b "~param_name" : \b [type] description of param_name


\subsubsection services ROS services
- \b "foo_service": [std_srvs/FooType] description of foo_service


<!-- END: copy for each node -->

\section commandline Command-line tools

This section is a catch-all for any additional tools that your package
provides or uses that may be of use to the reader. For example:

- tools/scripts (e.g. rospack, roscd)
- roslaunch .launch files
- xmlparam files

\subsection script_name script_name

Description of what this script/file does.

\subsubsection Usage
\verbatim
$ ./script_name [args]
\endverbatim

\par Example

\verbatim
$ ./script_name foo bar
\endverbatim
*/