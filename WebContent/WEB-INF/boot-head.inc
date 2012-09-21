<%@taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c"%>
<%@ taglib tagdir="/WEB-INF/tags"  prefix="h" %>
 
<c:url var="url" value="/resources/" />
<c:url var="loginUrl" value="/login.jsp" />
 
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
<link rel="shortcut icon" href="${url}ico/favicon.ico">
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
                                                
<c:choose>
  <c:when test="${not empty sessionScope.username }">

		Welocome: ${pageContext.request.userPrincipal.name}

		<a class="btn btn-small" href="logout.jsp"><i class="icon-off"></i>Logout 1</a>
  </c:when>
  <c:otherwise>
<form class="navbar-form pull-left" action="${loginUrl}" method="post">
<input type="text" name="username" />
<input type="password" name="password" required class="span2" />
<input type="hidden" name="redirectUrl" value="/girls.jsp" />
<button class="btn" type="submit">Login</button>
</form>

  </c:otherwise>
</c:choose>
                                                


<h:hasRole role="ADMIN">
  <li class="active"><a href="<c:url value="/admin/addGirls.jsp" />">Add grils</a></li>
</h:hasRole>

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