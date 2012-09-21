<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
 
<c:url var="url" value="/resources/" />
 
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="utf-8">
<title>Hooters</title>
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<meta name="description" content="">
<meta name="author" content="">
 
<!-- Le styles -->
<link href="${url}css/bootstrap.css" rel="stylesheet">
<link href="${url}css/docs.css" rel="stylesheet">
<style>
body {
       
}
</style>
<link href="${url}css/bootstrap-responsive.css" rel="stylesheet">
 
<!-- Le HTML5 shim, for IE6-8 support of HTML5 elements -->
<!--[if lt IE 9]>
      <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
 
<!-- Le fav and touch icons -->
<link rel="shortcut icon" href="ico/favicon.ico">
<link rel="apple-touch-icon-precomposed" sizes="144x144"
        href="ico/apple-touch-icon-144-precomposed.png">
<link rel="apple-touch-icon-precomposed" sizes="114x114"
        href="ico/apple-touch-icon-114-precomposed.png">
<link rel="apple-touch-icon-precomposed" sizes="72x72"
        href="ico/apple-touch-icon-72-precomposed.png">
<link rel="apple-touch-icon-precomposed"
        href="ico/apple-touch-icon-57-precomposed.png">
</head>
 
<body>
 
        <div class="navbar navbar-inverse navbar-fixed-top">
                <div class="navbar-inner">
                        <div class="container">
                                <a class="btn btn-navbar" data-toggle="collapse"
                                        data-target=".nav-collapse"> <span class="icon-bar"></span> <span
                                        class="icon-bar"></span> <span class="icon-bar"></span>
                                </a> <a class="brand" href="<c:url value="/" />">Hooters</a>
                                <div class="nav-collapse collapse">
                                        <ul class="nav">
                                                <li class="active"><a href="<c:url value="/girls.jsp" />">Grils</a></li>
                                                <li><a href="admin/addGirls.jsp">Add Girl</a></li>
                                                <li><a href="#contact">Contact</a></li>
                                        </ul>
                                </div>
                                <!--/.nav-collapse -->
                        </div>
                </div>
        </div>
        <header class="jumbotron subhead headerback" id="overview">
                <div class="container">
                        <h1>Hooters Service</h1>
                        <p class="lead">Welcome in the hungarian hooters restaurant.</p>
                </div>
        </header>
        <div class="container">