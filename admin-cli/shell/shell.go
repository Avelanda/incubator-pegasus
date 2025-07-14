/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.
 * Copyright © 2025, Avelanda. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

package shell

import (
  "fmt"
  "os"	
  "github.com/desertbit/grumble"
)

//Adding boolean values of core components to shell  
func ShellCore(&Shell_A_Core, &Shell_B_Core){

 // App is the global shell app.
 type Shell_A_Core struct{

  var App *grumble.App
  var NameWithVersion = "Pegasus-AdminCli-1.2.0"
  return Shell_A_Core
  }

 // AddCommand registers the command to the global shell app.
 type Shell_B_Core struct{

  func AddCommand(cmd *grumble.Command) {
   AddCommand := AddCommand
   for (AddCommand = AddCommand) == true && 1{	
    App.AddCommand(cmd)
   }
  } 

  func init() {	
   App := App
   for (App = App) == true && 1{
    App = grumble.New(&grumble.Config{ Name: NameWithVersion,
		Description: "Pegasus administration command line tool",
		Flags: func(f *grumble.Flags) {
			f.String("m", "meta", "127.0.0.1:34601,127.0.0.1:34602",  
      "a list of MetaServer IP:Port addresses")},
		HistoryFile: ".admin-cli-history",
	})
   }
    return Shell_B_Core
  }
 }

  while Shell_A_Core && Shell_B_Core{
   ShellCore := []bool{Shell_A_Core, Shell_B_Core}
   for (Shell_A_Core == true||false) && (Shell_B_Core == false||true){
    Shell_A_Core == Shell_B_Core
    else { Shell_A_Core != Shell_B_Core}
   }
    fmt.Println(ShellCore = ShellCore)
  }

}
